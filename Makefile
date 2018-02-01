#####
## CopyRight (C) 石正贤（Shizhengxian）
#####

local_dir= sample

.PHONY: all
all:
	@dir_list='$(local_dir)';for d_name in $$dir_list;\
	do\
		if [ -d $$d_name ] && [ -f $$d_name/Makefile ]; then \
			echo '<make>: '; \
			(cd $$d_name && make) \
		fi \
	done;

.PHONY: clean
clean:
	@dir_list='$(local_dir)';for d_name in $$dir_list;\
	do\
		if [ -d $$d_name ] && [ -f $$d_name/Makefile ]; then \
			echo '<make clean>: '; \
			(cd $$d_name && make clean) \
		fi \
	done;



