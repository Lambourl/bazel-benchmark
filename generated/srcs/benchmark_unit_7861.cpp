#include "bench/fib.hpp"

// RE Benchmark TU 7861 of 20000 (depth=28, stamp="default")
namespace bench_tu_7861 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7861>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7861
