# Script that installs and configures Nginx

package { 'nginx':
  ensure => installed,
}

file_line { 'install':
  ensure => 'present',
  path   => '/etc/nginx/sites-enabled/default',
  after  => 'listen 80 default_sever;',
  line   => 'rewrite ^/redirect_me https://www.github.com/nanakzy permanent:',
}

file { '/var/www/html/index.html':
  content => 'Hello world!',
}

service { 'nginx':
  ensure  => running,
  require => Package['nginx'],
}
