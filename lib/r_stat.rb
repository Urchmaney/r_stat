# frozen_string_literal: true

require_relative "r_stat/version"
require_relative "../r_statistics"

# p show_nil
# p create_hash_with_val("john")
# p sum([2, 0, 4, 99]), "===="
module RStat
  class Error < StandardError; end
  # Your code goes here...
  extend RStatistics

  def self.mean(arr)
    sum(arr) / arr.length
  end
end
