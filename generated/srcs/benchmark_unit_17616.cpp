#include "bench/fib.hpp"

// RE Benchmark TU 17616 of 20000 (depth=28, stamp="default")
namespace bench_tu_17616 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17616>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17616
