# frozen_string_literal: true

require "bundler/gem_tasks"
require "rspec/core/rake_task"
require "rake/extensiontask"
require "rubocop/rake_task"

RSpec::Core::RakeTask.new(:spec)

RuboCop::RakeTask.new

Rake::ExtensionTask.new "r_statistics" do |ext|
  ext.lib_dir = "lib/r_statistics"
end

task default: %i[compile spec rubocop]
