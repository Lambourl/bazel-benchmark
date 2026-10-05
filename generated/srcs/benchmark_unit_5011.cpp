#include "bench/fib.hpp"

// RE Benchmark TU 5011 of 20000 (depth=28, stamp="default")
namespace bench_tu_5011 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5011>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5011
