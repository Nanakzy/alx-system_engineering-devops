# Define a package resource to install Flask version 2.1.0 using pip3
package { 'Flask':
  ensure   => '2.1.0',
  provider => 'pip3',
}

# Define a package resource to install Werkzeug version 2.1.1 using pip3
package { 'Werkzeug':
  ensure   => '2.1.1',
  provider => 'pip3',
}

# Notice will be shown when Flask package is created
notify { 'Flask_package_created':
  message  => 'Package[Flask]/ensure: created',
}
