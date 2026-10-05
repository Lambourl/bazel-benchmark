#include "bench/fib.hpp"

// RE Benchmark TU 14698 of 20000 (depth=28, stamp="default")
namespace bench_tu_14698 {
constexpr unsigned long long result = ::bench::slow_fib<28, 14698>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_14698
