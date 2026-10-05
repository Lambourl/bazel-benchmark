#include "bench/fib.hpp"

// RE Benchmark TU 934 of 20000 (depth=28, stamp="default")
namespace bench_tu_934 {
constexpr unsigned long long result = ::bench::slow_fib<28, 934>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_934
