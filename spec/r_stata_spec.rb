# frozen_string_literal: true

RSpec.describe RStata do
  it "has a version number" do
    expect(RStata::VERSION).not_to be nil
  end

  it "should calculate sum" do
    result = RStata.sum([1, 2, 3, 4, 5])
    expect(result).to eq(15)
  end

  it "should calculate mean" do
    result = RStata.mean([1, 2, 3, 4, 5])
    expect(result).to eq(3)
  end

  it "should calculate variance" do
    result = RStata.variance([10, 12, 23, 23, 16, 23, 21, 16])
    expect(result).to eq(24)
  end
end
