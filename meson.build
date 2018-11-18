project('_test_', 'cpp', default_options : ['cpp_std=c++11',
			   			 				    'buildtype=debug',
			   			   					'warning_level=3'])

mytest = files('mytest.cc')

gtest = dependency('gtest', main: true, required: true, 
                   fallback : ['gtest', 'gtest_main_dep'])

exe = executable(meson.project_name(), mytest, dependencies: [gtest])

