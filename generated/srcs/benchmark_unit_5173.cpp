#include "bench/fib.hpp"

// RE Benchmark TU 5173 of 20000 (depth=28, stamp="default")
namespace bench_tu_5173 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5173>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5173
