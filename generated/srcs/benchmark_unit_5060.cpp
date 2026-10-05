#include "bench/fib.hpp"

// RE Benchmark TU 5060 of 20000 (depth=28, stamp="default")
namespace bench_tu_5060 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5060>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5060
