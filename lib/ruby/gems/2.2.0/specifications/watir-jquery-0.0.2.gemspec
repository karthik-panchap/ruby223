# -*- encoding: utf-8 -*-
# stub: watir-jquery 0.0.2 ruby lib

Gem::Specification.new do |s|
  s.name = "watir-jquery"
  s.version = "0.0.2"

  s.required_rubygems_version = Gem::Requirement.new(">= 0") if s.respond_to? :required_rubygems_version=
  s.require_paths = ["lib"]
  s.authors = ["Brian Olore"]
  s.date = "2013-04-28"
  s.description = "Provides abilty to use jQuery selectors in Watir tests"
  s.email = ["brian@olore.net"]
  s.homepage = "https://github.com/olore/watir-jquery"
  s.rubygems_version = "2.4.5.1"
  s.summary = "Provides abilty to use jQuery selectors in Watir tests"

  s.installed_by_version = "2.4.5.1" if s.respond_to? :installed_by_version

  if s.respond_to? :specification_version then
    s.specification_version = 3

    if Gem::Version.new(Gem::VERSION) >= Gem::Version.new('1.2.0') then
      s.add_development_dependency(%q<rake>, [">= 0"])
      s.add_development_dependency(%q<watir-webdriver>, [">= 0"])
    else
      s.add_dependency(%q<rake>, [">= 0"])
      s.add_dependency(%q<watir-webdriver>, [">= 0"])
    end
  else
    s.add_dependency(%q<rake>, [">= 0"])
    s.add_dependency(%q<watir-webdriver>, [">= 0"])
  end
end
