exe_args = common_args + []

# sources used to compile this program
tool_sources = [
  'gstformatconvert.cpp',
]

executable('gstformatconvert',
  tool_sources,
  install: true,
  c_args : exe_args,
  include_directories: [configinc],
  dependencies : tool_deps,
)
