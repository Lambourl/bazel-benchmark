#include "bench/fib.hpp"

// RE Benchmark TU 16722 of 20000 (depth=28, stamp="default")
namespace bench_tu_16722 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16722>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16722
