# frozen_string_literal: true

require "English"
require "bundler/gem_tasks"
require "rspec/core/rake_task"

RSpec::Core::RakeTask.new(:spec)

require "rubocop/rake_task"

RuboCop::RakeTask.new

task :build_ext do
  Dir.chdir("ext") do
    output = `ruby extconf.rb`
    raise output unless $CHILD_STATUS == 0

    output = `make`
    raise output unless $CHILD_STATUS == 0
  end
end

task default: %i[build_ext spec rubocop]
