require "bundler/gem_tasks"
require 'rake/extensiontask'

spec = Gem::Specification.load('ice.gemspec')
Rake::ExtensionTask.new('ice', spec)

task :default => [:clean, :compile]
