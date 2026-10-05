#include "bench/fib.hpp"

// RE Benchmark TU 8935 of 20000 (depth=28, stamp="default")
namespace bench_tu_8935 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8935>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8935
