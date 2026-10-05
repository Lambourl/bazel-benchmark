#include "bench/fib.hpp"

// RE Benchmark TU 3094 of 20000 (depth=28, stamp="default")
namespace bench_tu_3094 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3094>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3094
