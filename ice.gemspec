# coding: utf-8
lib = File.expand_path('../lib', __FILE__)
$LOAD_PATH.unshift(lib) unless $LOAD_PATH.include?(lib)
require 'ice/version'

Gem::Specification.new do |spec|
  spec.name          = "ice"
  spec.version       = Ice::VERSION
  spec.authors       = ["Jonathan Jackson", "Chase McCarthy"]
  spec.email         = ["jonathan.jackson1@me.com", "chase@code0100fun.com"]
  spec.description   = %q{What happened to the dinosaurs?  THE ICE AGE!!!!!!}
  spec.summary       = %q{You're not sending ME to the COOLER!}
  spec.homepage      = ""
  spec.license       = "MIT"

  spec.files         = Dir.glob("ext/**/*.{c,rb}") + Dir.glob("lib/**/*.rb")
  spec.executables   = spec.files.grep(%r{^bin/}) { |f| File.basename(f) }

  spec.extensions << "ext/ice/extconf.rb"

  spec.test_files    = spec.files.grep(%r{^(test|spec|features)/})
  spec.require_paths = ["lib"]

  spec.add_development_dependency "bundler", "~> 1.3"
  spec.add_development_dependency "rake"
  spec.add_development_dependency "rake-compiler"
end
