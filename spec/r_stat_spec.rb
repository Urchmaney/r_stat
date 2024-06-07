# frozen_string_literal: true

RSpec.describe RStat do
  it "has a version number" do
    expect(RStat::VERSION).not_to be nil
  end

  it "should calculate mean" do
    result = RStat.mean([1, 2, 3, 4, 5])
    expect(result).to eq(3)
  end
end
