#include "bench/fib.hpp"

// RE Benchmark TU 6190 of 20000 (depth=28, stamp="default")
namespace bench_tu_6190 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6190>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6190
