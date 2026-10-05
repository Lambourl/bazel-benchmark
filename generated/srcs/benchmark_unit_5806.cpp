#include "bench/fib.hpp"

// RE Benchmark TU 5806 of 20000 (depth=28, stamp="default")
namespace bench_tu_5806 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5806>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5806
