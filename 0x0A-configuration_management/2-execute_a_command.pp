# kill process killmenow

exec { 'pkill':
  command  => 'pkill killmenow',
  provider => 'shell',
  returns  => [0, 1],
}
