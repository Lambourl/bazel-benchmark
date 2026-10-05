#include "bench/fib.hpp"

// RE Benchmark TU 7093 of 20000 (depth=28, stamp="default")
namespace bench_tu_7093 {
constexpr unsigned long long result = ::bench::slow_fib<28, 7093>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_7093
