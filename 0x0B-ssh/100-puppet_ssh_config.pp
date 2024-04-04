#!/usr/bin/env bash
# using puppet to mkae changes to my configuration file

file { '/etc/ssh/ssh_config':
  ensure => present,

content =>"

        #SSH client configuration
        host*
        IdentityFile ~/.ssh/school
        PasswordAuthentication no
}
