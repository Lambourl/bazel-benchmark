#include "bench/fib.hpp"

// RE Benchmark TU 5831 of 20000 (depth=28, stamp="default")
namespace bench_tu_5831 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5831>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5831
