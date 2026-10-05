#include "bench/fib.hpp"

// RE Benchmark TU 5616 of 20000 (depth=28, stamp="default")
namespace bench_tu_5616 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5616>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5616
