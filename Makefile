clear:
	clear

gen:
	flex -o src/rules/lexer.cpp src/rules/lexer_specs.l
	bison -d -o src/rules/parser.cpp src/rules/parser_grammar.y

comp:
	g++ -o build/EZL \
		src/main.cpp \
		\
		src/parse_tree/statements/statement_analyzer.cpp \
		src/parse_tree/statements/statement_generator.cpp \
		\
		src/parse_tree/expressions/expression_analyzer.cpp \
		src/parse_tree/expressions/expression_generator.cpp \
		src/parse_tree/expressions/expression_evaluator.cpp \
		\
		src/parse_tree/branches/branch_analyzer.cpp \
		src/parse_tree/branches/branch_generator.cpp \
		\
		src/parse_tree/functions/function_generator.cpp \
		src/parse_tree/functions/function_analyzer.cpp \
		\
		src/rules/lexer.cpp \
		src/rules/parser.cpp

build:
	@make -s clear
	@make -s gen
	@make -s comp

run:
	@make -s clear
	build\\EZL data/input.ezl -o data/src.quad -s data/symbol_table.txt

all:
	@make -s build
	@make -s run