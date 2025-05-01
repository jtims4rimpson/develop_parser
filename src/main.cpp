# develop_parser utility scripts

require 'json'
require 'net/http'
require 'logger'

logger = Logger.new(STDOUT)
logger.level = Logger::INFO

config_file = File.join(__dir__, 'config.json')
config = if File.exist?(config_file)
            JSON.parse(File.read(config_file))
         else
            logger.warn("Config missing, using defaults")
            {"mode" => "dev"}
         end

def read_file(file, logger)
    if File.exist?(file)
        File.read(file)
    else
        logger.error("File not found: #{file}")
        nil
    end
end

class Project
    attr_reader :name, :files
    def initialize(name)
        @name = name
        @files = []
    end

    def add_file(file)
        @files << file
        puts "Added #{file}"
    end
end

project = Project.new("develop_parser")
project.add_file("main")
puts "Project #{project.name} has #{project.files.size} file(s)"

# Additional Implementation 1760536765

# Code Update 1760536766-10568

# Code Update 1760536766-21796

# Additional Implementation 1760536766

# Code Update 1760536766-32282
