require 'spec_helper'
require_relative '../lib/ice'

describe Ice do
  describe '.chill(filename)' do

    it 'exists' do
      msg = Ice.chill()
      expect(msg).to eq('Tonight hell freezes over!')
    end

    context 'given no filename' do
      xit 'returns hex encoded binary string of ruby bytecode' do

      end
    end
  end
end
