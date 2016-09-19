require 'awesome_print'
require 'irb/completion'
require 'wirble'

AwesomePrint.irb!
Wirble.init
Wirble.colorize
IRB.conf[:AUTO_INDENT]=true

class Object
	def cm
		ap (self.methods - Object.methods).sort
	end

	def im
		ap (methods - Object.methods - Object.instance_methods).sort
	end
end

def cls
    system('cls')
end

def windows?
  (/cygwin|mswin|mingw|bccwin|wince|emx/ =~ RUBY_PLATFORM) != nil
end

def mac?
 (/darwin/ =~ RUBY_PLATFORM) != nil
end

def unix?
  !windows?
end

def linux?
  unix? and not mac?
end

def apf(foo)
	if (windows?)
		file = 'c:\temp\tmp.del.txt'
		File.open(file, 'w') {|f| f.write(foo.awesome_inspect)}
		system('start', 'c:\users\karthik\github\apps2\st3\subl.exe', '-n', 'c:\temp\apf.tmp.txt')
	elsif (linux?)
		file = 	'~/tmp.del.txt'
	end
end