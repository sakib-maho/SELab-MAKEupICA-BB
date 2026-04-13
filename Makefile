CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

.PHONY: build test clean

build:
	$(CC) $(CFLAGS) src/main.c src/metrics.c -o metrics_cli

test:
	$(CC) $(CFLAGS) tests/test_metrics.c src/metrics.c -o metrics_test
	./metrics_test

clean:
	rm -f metrics_cli metrics_test
