#include "bench/fib.hpp"

// RE Benchmark TU 8143 of 20000 (depth=28, stamp="default")
namespace bench_tu_8143 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8143>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8143
