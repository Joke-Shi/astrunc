CC= g++
CXXFLAGS= -g -Wall -std=c++0x

inc_opts= -I../include
bin_dir = ../bin


.PHONY : all clean sample_en sample_zh sample_all
all: sample_en sample_zh sample_all
sample_en: sample_en.cc
	$(CC) $(CXXFLAGS) $(inc_opts) $^ -o $@

sample_zh: sample_zh.cc
	$(CC) $(CXXFLAGS) $(inc_opts) $^ -o $@

sample_all: sample_all.cc
	$(CC) $(CXXFLAGS) $(inc_opts) $^ -o $@



clean:
	@echo "Clean..."
	@rm -rf sample_en sample_zh sample_all

