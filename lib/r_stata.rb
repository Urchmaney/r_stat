# frozen_string_literal: true

require_relative "r_stata/version"
require_relative "./r_statistics"

# Rstat main module
module RStata
  class Error < StandardError; end
  extend RStatistics
end
