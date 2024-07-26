# frozen_string_literal: true

require_relative "r_stat/version"
require_relative "../ext/r_statistics"

# Rstat main module
module RStat
  class Error < StandardError; end
  extend RStatistics

  def self.mean(arr)
    sum(arr) / arr.length
  end
end
