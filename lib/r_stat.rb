# frozen_string_literal: true

require_relative "r_stat/version"
require_relative "../r_statistics"


module RStat
  class Error < StandardError; end
  extend RStatistics

  def self.mean(arr)
    sum(arr) / arr.length
  end
end
