#include "bench/fib.hpp"

// RE Benchmark TU 11886 of 20000 (depth=28, stamp="default")
namespace bench_tu_11886 {
constexpr unsigned long long result = ::bench::slow_fib<28, 11886>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_11886
