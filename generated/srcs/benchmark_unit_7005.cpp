#include "bench/fib.hpp"

// RE Benchmark TU 7005 of 20000 (depth=28, stamp="default")
namespace bench_tu_7005 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7005>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7005
