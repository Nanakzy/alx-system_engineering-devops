# Increase the ULIMIT of the default file
<<<<<<< HEAD

exec { 'nginx-restart':
  command => '/etc/init.d/nginx restart',
  path    => '/etc/init.d/',
  require => Exec['fix--for-nginx'],
}
=======
exec { 'fix--for-nginx':
  command => 'sed -i "s/15/4096/" /etc/default/nginx',
  path    => '/usr/local/bin/:/bin/'
} ->
>>>>>>> d0b9d05aab4aadde7eca80d8ce5515b015554b4f

# Restart Nginx
exec { 'nginx-restart':
  command => 'nginx restart',
  path    => '/etc/init.d/'
}
