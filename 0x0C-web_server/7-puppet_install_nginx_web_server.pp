# Script that installs and configures Nginx

package { 'nginx':
  ensure => installed,
}

file_line { 'install':
  ensure => 'present',
  path   => '/etc/nginx/sites-enabled/default',
  after  => 'listen 80 default_sever;',
  time   => 'rewrite ^/redirect_me https://www.youtube.com/watch?v=QH2-TGUlwu4 permanent:',
}

file { '/var/www/html/index.html':
  content => 'Hello world!',
}

service { 'nginx':
  ensure  => running,
  require => Package['nginx'],
}
