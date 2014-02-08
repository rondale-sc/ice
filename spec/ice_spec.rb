require 'spec_helper'
require_relative '../lib/ice'

describe Ice do
  describe '.chill(filename)' do
    it 'exists' do
      msg = Ice.chill()
      expect(msg).to eq('Tonight hell freezes over!')
    end
  end

  describe '.running?' do
    it 'is true' do
      expect(Ice.vm_running?).to be_true
    end
  end
end
