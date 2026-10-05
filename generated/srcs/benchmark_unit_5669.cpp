#include "bench/fib.hpp"

// RE Benchmark TU 5669 of 20000 (depth=28, stamp="default")
namespace bench_tu_5669 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5669>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5669
