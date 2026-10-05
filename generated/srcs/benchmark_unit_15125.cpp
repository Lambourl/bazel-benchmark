#include "bench/fib.hpp"

// RE Benchmark TU 15125 of 20000 (depth=28, stamp="default")
namespace bench_tu_15125 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15125>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15125
