# -*- encoding: utf-8 -*-
# stub: google_directions 0.1.6.2 ruby lib

Gem::Specification.new do |s|
  s.name = "google_directions"
  s.version = "0.1.6.2"

  s.required_rubygems_version = Gem::Requirement.new(">= 1.2") if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib"]
  s.authors = ["Josh Crews"]
  s.date = "2014-02-26"
  s.description = "Ruby-wrapper for Google Directions API.  Can return the drive time and driving distance between to places"
  s.email = "josh@joshcrews.com"
  s.extra_rdoc_files = ["README.textile", "lib/google_directions.rb"]
  s.files = ["README.textile", "lib/google_directions.rb"]
  s.homepage = "http://github.com/joshcrews/Google-Directions-Ruby"
  s.rdoc_options = ["--line-numbers", "--title", "Google_directions", "--main", "README.textile"]
  s.rubyforge_project = "google_directions"
  s.rubygems_version = "2.4.5.1"
  s.summary = "Ruby-wrapper for Google Directions API.  Can return the drive time and driving distance between to places"

  s.installed_by_version = "2.4.5.1" if s.respond_to? :installed_by_version

  if s.respond_to? :specification_version then
    s.specification_version = 3

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_runtime_dependency(%q<nokogiri>, [">= 1.4.1"])
    else
      s.add_dependency(%q<nokogiri>, [">= 1.4.1"])
    end
  else
    s.add_dependency(%q<nokogiri>, [">= 1.4.1"])
  end
end
