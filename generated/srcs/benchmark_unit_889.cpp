#include "bench/fib.hpp"

// RE Benchmark TU 889 of 20000 (depth=28, stamp="default")
namespace bench_tu_889 {
constexpr unsigned long long result = ::bench::slow_fib<28, 889>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_889
