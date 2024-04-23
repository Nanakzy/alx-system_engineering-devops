# Puppet manifest to install and configure Nginx server

# Install Nginx package
package { 'nginx':
  ensure => installed,
}

# Ensure Nginx service is running
service { 'nginx':
  ensure  => running,
  require => Package['nginx'],
}

# Configure Nginx server block
file { '/etc/nginx/sites-available/default':
  ensure  => present,
  content => template('nginx/default.erb'),
  notify  => Service['nginx'],
}

# Enable the server block
file { '/etc/nginx/sites-enabled/default':
  ensure  => link,
  target  => '/etc/nginx/sites-available/default',
  require => File['/etc/nginx/sites-available/default'],
}

# Create index.html with "Hello World!" content
file { '/var/www/html/index.html':
  ensure  => present,
  content => 'Hello World!',
}

# Redirect /redirect_me to the specified URL with a 301 Moved Permanently response
file { '/etc/nginx/sites-available/redirect':
  ensure  => present,
  content => template('nginx/redirect.erb'),
  notify  => Service['nginx'],
}

# Enable the redirection server block
file { '/etc/nginx/sites-enabled/redirect':
  ensure  => link,
  target  => '/etc/nginx/sites-available/redirect',
  require => File['/etc/nginx/sites-available/redirect'],
}
