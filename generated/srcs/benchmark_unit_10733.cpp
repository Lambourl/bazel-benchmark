#include "bench/fib.hpp"

// RE Benchmark TU 10733 of 20000 (depth=28, stamp="default")
namespace bench_tu_10733 {
constexpr unsigned long long result = ::bench::slow_fib<28, 10733>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_10733
