cxx_library(
  name = 'a', 
  header_namespace = 'a', 
  exported_headers = subdir_glob([
    ('a/include', '**/*.hpp'), 
  ]), 
  srcs = glob([
    'a/src/**/*.cpp', 
  ]), 
  deps = [
    ':b', 
  ], 
)

cxx_library(
  name = 'b', 
  header_namespace = 'b', 
  exported_headers = subdir_glob([
    ('b/include', '**/*.hpp'), 
  ]), 
  srcs = glob([
    'b/src/**/*.cpp', 
  ]), 
  deps = [
    ':c', 
  ], 
)

cxx_library(
  name = 'c', 
  header_namespace = 'c', 
  exported_headers = subdir_glob([
    ('c/include', '**/*.hpp'), 
  ]), 
  srcs = glob([
    'c/src/**/*.cpp', 
  ]), 
  # compiler_flags = [
  #   '-fvisibility=hidden', 
  # ], 
)

cxx_binary(
  name = 'main', 
  srcs = [
    'main.cpp', 
  ], 
  deps = [
    ':a', 
  ], 
)
