#include "bench/fib.hpp"

// RE Benchmark TU 8084 of 20000 (depth=28, stamp="default")
namespace bench_tu_8084 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8084>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8084
