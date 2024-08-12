# RStata

A Simple Ruby statistics Gem in its infancy. Using C extensions to make it faster.

## Installation

Install the gem and add to the application's Gemfile by executing:

    $ bundle add r_stata

If bundler is not being used to manage dependencies, install the gem by executing:

    $ gem install r_stata

## Usage

### Mean
```ruby
    RStata.mean [...]
```
### Summation
```ruby
RStata.sum([1, 3, 5])
```

## Under Development (TODO)
- [ ] Standard Deviation
- [ ] Variance

## Contributing

Bug reports and pull requests are welcome on GitHub at https://github.com/urchmaney/r_stat. This project is intended to be a safe, welcoming space for collaboration, and contributors.

## License

The gem is available as open source under the terms of the [MIT License](https://opensource.org/licenses/MIT).

