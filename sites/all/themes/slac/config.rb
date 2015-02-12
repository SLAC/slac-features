# Require any additional compass plugins here.
require 'compass'
require 'susy'

# Set this to the root of your project when deployed:
http_path = "/"
css_dir = "css"
sass_dir = "sass"
images_dir = "images"
javascripts_dir = "js"
fonts_dir = "fonts" 

# You can select your preferred output style here (can be overridden via the command line):
# output_style = :expanded or :nested or :compact or :compressed

# To enable relative paths to assets via compass helper functions. Uncomment:
relative_assets = true

# To disable debugging comments that display the original location of your selectors. Uncomment:
line_comments = false

preferred_syntax = :sass

# Add cache buster
asset_cache_buster :none
output_style = :compact
sprite_engine = :chunky_png
chunky_png_options = {:best_compression  => Zlib::BEST_COMPRESSION}
sass_options = {:sourcemap => true}
sass_options = {:debug_info => false}
enable_sourcemaps = true
sourcemap = true
